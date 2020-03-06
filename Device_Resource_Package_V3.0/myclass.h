#ifndef MYCLASS_H
#define MYCLASS_H

#include <QtWidgets/QWidget>
#include "ui_myclass.h"

class MyClass : public QWidget
{
	Q_OBJECT

public:
	MyClass(QWidget *parent = 0);
	~MyClass();

	///�����ļ���
	bool Create_Dir(const QString &path);

	///�����ļ���
	bool Copy_Dir(const QString &fromDir, const QString &toDir, bool coverFileIfExist);

	///�����ļ�
	bool Copy_File(QString sourceDir, QString toDir, bool coverFileIfExist);

	///�滻��Ҫ�޸ĵ��ļ�
	bool Replace_File(const QString &frompath, const QString & topath);

	///��ѹjar��
	bool Unjar_File(const QString& strJar);

	///ѹ��jar��
	bool Jar_File(const QString& strJar);

	///ɾ��jar���е��ļ�
	bool Remove_InJarFile(const QString& str7za);

	///ѹ��zip��
	bool Zip_Dir(const QString& strZip);

	///ɾ���ļ��л��ļ�
	bool DeleteFileOrDir(const QString &Path);

private:
	Ui::MyClassClass ui;

	QString m_qValue_1;
	QString m_qValue_2;
	QString m_qValue_3;
	QString m_qValue_4;
	QString m_qValue_5;
	QString m_qValue_6;
	QString m_qValue_7;
	QString m_qValue_8;
	QString m_qValue_9;
	QString m_qValue_10;
	QString m_qValue_11;
	QString m_qValue_12;
	QString m_qValue_13;
	QString m_qValue_14;
	QString m_qValue_15;
};

#endif // MYCLASS_H
