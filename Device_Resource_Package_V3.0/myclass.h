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

	///创建文件夹
	bool Create_Dir(const QString &path);

	///拷贝文件夹
	bool Copy_Dir(const QString &fromDir, const QString &toDir, bool coverFileIfExist);

	///拷贝文件
	bool Copy_File(QString sourceDir, QString toDir, bool coverFileIfExist);

	///替换需要修改的文件
	bool Replace_File(const QString &frompath, const QString & topath);

	///解压jar包
	bool Unjar_File(const QString& strJar);

	///压缩jar包
	bool Jar_File(const QString& strJar);

	///删除jar包中的文件
	bool Remove_InJarFile(const QString& str7za);

	///压缩zip包
	bool Zip_Dir(const QString& strZip);

	///删除文件夹或文件
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
