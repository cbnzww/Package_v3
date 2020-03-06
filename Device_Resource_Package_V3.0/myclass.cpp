#include "stdafx.h"
#include "myclass.h"

MyClass::MyClass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.pushButton_3_Confrim , &QPushButton::clicked, this, [=]()
	{
		m_qValue_1 = ui.lineEdit_1->text();
		m_qValue_2 = ui.lineEdit_2->text();
		m_qValue_3 = ui.lineEdit_3->text();
		m_qValue_4 = ui.lineEdit_4->text();
		m_qValue_5 = ui.lineEdit_5->text();
		m_qValue_6 = ui.lineEdit_6->text();
		m_qValue_7 = ui.lineEdit_7->text();
		m_qValue_8 = ui.lineEdit_8->text();
		m_qValue_9 = ui.lineEdit_9->text();
		m_qValue_10 = ui.lineEdit_10->text();
		m_qValue_11 = ui.lineEdit_11->text();
		m_qValue_12 = ui.lineEdit_12->text();
		m_qValue_13 = ui.lineEdit_13->text();
		m_qValue_14 = ui.lineEdit_14->text();
		m_qValue_15 = ui.lineEdit_15->text();

		///创建第一级目录
		QString DirPath1 = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/xres_resource_") + m_qValue_1 + QString::fromLocal8Bit("_") + m_qValue_2 + QString::fromLocal8Bit("_1.0.0");
		Create_Dir(DirPath1);

		///创建第二级目录
		QString DirPath2 = DirPath1 + QString::fromLocal8Bit("/META-INF");
		QString DirPath3 = DirPath1 + QString::fromLocal8Bit("/minio_assistant_") + m_qValue_2;
		QString DirPath4 = DirPath1 + QString::fromLocal8Bit("/script");
		QString DirPath5 = DirPath1 + QString::fromLocal8Bit("/xres-rms");
		QString DirPath6 = DirPath1 + QString::fromLocal8Bit("/xres-trigger");
		Create_Dir(DirPath2);
		Create_Dir(DirPath3);
		Create_Dir(DirPath4);
		Create_Dir(DirPath5);
		Create_Dir(DirPath6);

		///META-INF文件操作
		QString DirPath7_From = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/xres_resource_{1}_{2}_1.0.0/META-INF/packageinfo.xml");
		QString DirPath7_To = DirPath2 + QString::fromLocal8Bit("/packageinfo.xml");
		Replace_File(DirPath7_From, DirPath7_To);

		///minio_assistant_{2}文件操作
		QString DirPath8_From = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/xres_resource_{1}_{2}_1.0.0/minio_assistant_{2}/bicIdentify");
		QString DirPath8_To = DirPath3 + QString::fromLocal8Bit("/bicIdentify");
		QString DirPath9_From = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/xres_resource_{1}_{2}_1.0.0/minio_assistant_{2}/minio_assistant_amd64");
		QString DirPath9_To = DirPath3 + QString::fromLocal8Bit("/minio_assistant_amd64");
		QString DirPath10_From = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/xres_resource_{1}_{2}_1.0.0/minio_assistant_{2}/minio_assistant_arm8_huawei");
		QString DirPath10_To = DirPath3 + QString::fromLocal8Bit("/minio_assistant_arm8_huawei");
		QString DirPath11_From = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/xres_resource_{1}_{2}_1.0.0/minio_assistant_{2}/upload_2_minio.sh");
		QString DirPath11_To = DirPath3 + QString::fromLocal8Bit("/upload_2_minio.sh");
		QString DirPath12_From = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/xres_resource_{1}_{2}_1.0.0/minio_assistant_{2}/minio_upload.xml");
		QString DirPath12_To = DirPath3 + QString::fromLocal8Bit("/minio_upload.xml");
		Copy_Dir(DirPath8_From, DirPath8_To, true);
		Copy_File(DirPath9_From, DirPath9_To, true);
		Copy_File(DirPath10_From, DirPath10_To, true);
		Copy_File(DirPath11_From, DirPath11_To, true);
		Replace_File(DirPath12_From, DirPath12_To);

		///script文件操作
		QString DirPath13_From = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/xres_resource_{1}_{2}_1.0.0/script/install.sh");
		QString DirPath13_To = DirPath4 + QString::fromLocal8Bit("/install.sh");
		Replace_File(DirPath13_From, DirPath13_To);

		///xres-rms文件操作
		QString DirPath14 = DirPath5 + QString::fromLocal8Bit("/config");
		QString DirPath15 = DirPath5 + QString::fromLocal8Bit("/expand");
		QString DirPath16 = DirPath14 + QString::fromLocal8Bit("/menumanufacturer");
		QString DirPath17_From = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/xres_resource_{1}_{2}_1.0.0/xres-rms/expand/data_dicts_xres_{2}_en_US.properties");
		QString DirPath17_To = DirPath15 + QString::fromLocal8Bit("/data_dicts_xres_") + m_qValue_2 + QString::fromLocal8Bit("_en_US.properties");
		QString DirPath18_From = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/xres_resource_{1}_{2}_1.0.0/xres-rms/expand/data_dicts_xres_{2}_zh_CN.properties");
		QString DirPath18_To = DirPath15 + QString::fromLocal8Bit("/data_dicts_xres_") + m_qValue_2 + QString::fromLocal8Bit("_zh_CN.properties");
		QString DirPath19_From = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/xres_resource_{1}_{2}_1.0.0/xres-rms/config/menumanufacturer/menu_manufacturer_{2}.xml");
		QString DirPath19_To = DirPath16 + QString::fromLocal8Bit("/menu_manufacturer_") + m_qValue_2 + QString::fromLocal8Bit(".xml");
		QString DirPath20_From = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/xres_resource_{1}_{2}_1.0.0/xres-rms/expand/data_dicts_xres_{2}.xml");
		QString DirPath20_To = DirPath15 + QString::fromLocal8Bit("/data_dicts_xres_") + m_qValue_2 + QString::fromLocal8Bit(".xml");
		Create_Dir(DirPath14);
		Create_Dir(DirPath15);
		Create_Dir(DirPath16);
		Replace_File(DirPath17_From, DirPath17_To);
		Replace_File(DirPath18_From, DirPath18_To);
		Replace_File(DirPath19_From, DirPath19_To);
		Replace_File(DirPath20_From, DirPath20_To);

		///xres-trigger文件操作
		QString DirPath21 = DirPath6 + QString::fromLocal8Bit("/config");
		QString DirPath22 = DirPath6 + QString::fromLocal8Bit("/lib");
		QString DirPath23 = DirPath21 + QString::fromLocal8Bit("/iconfig");
		QString DirPath24 = DirPath23 + QString::fromLocal8Bit("/protocol");
		QString DirPath25_From = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/xres_resource_{1}_{2}_1.0.0/xres-trigger/config/iconfig/protocol/manufacturer_protocol_{2}.xml");
		QString DirPath25_To = DirPath24 + QString::fromLocal8Bit("/manufacturer_protocol_") + m_qValue_2 + QString::fromLocal8Bit(".xml");
		Create_Dir(DirPath21);
		Create_Dir(DirPath22);
		Create_Dir(DirPath23);
		Create_Dir(DirPath24);
		Replace_File(DirPath25_From, DirPath25_To);
		///压缩解压jar包
		QString strJar_x = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/jar.exe xvf /Device_Resource_Package_V3.0/xres_resource_{1}_{2}_1.0.0/xres-trigger/lib/xres-resource-acess-{2}-1.0-SNAPSHOT.jar");
		QString strJar_c = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/jar.exe cvf xres-resource-acess-") + m_qValue_2 + QString::fromLocal8Bit("-1.0-SNAPSHOT.jar treate-type-common.properties");
		QString str7za_d = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/7za.exe d xres-resource-acess-") + m_qValue_2 + QString::fromLocal8Bit("-1.0-SNAPSHOT.jar /META-INF");
		QString DirPath26 = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/bin/treate-type-common.properties");
		QString DirPath27_From = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/bin/xres-resource-acess-") + m_qValue_2 + QString::fromLocal8Bit("-1.0-SNAPSHOT.jar");
		QString DirPath27_To = DirPath22 + QString::fromLocal8Bit("/xres-resource-acess-") + m_qValue_2 + QString::fromLocal8Bit("-1.0-SNAPSHOT.jar");
		Unjar_File(strJar_x);
		Replace_File(DirPath26, DirPath26);
		Jar_File(strJar_c);
		Remove_InJarFile(str7za_d);
		Copy_File(DirPath27_From, DirPath27_To, true);

		///生成最终压缩包
		QString DirPath28 = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/bin/xres_resource_") + m_qValue_1 + QString::fromLocal8Bit("_") + m_qValue_2 + QString::fromLocal8Bit("_1.0.0");
		QString DirPath29 = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/bin/xres_resource_") + m_qValue_1 + QString::fromLocal8Bit("_") + m_qValue_2 + QString::fromLocal8Bit("_1.0.0.zip");
		QString DirPath30 = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/xres_resource_") + m_qValue_1 + QString::fromLocal8Bit("_") + m_qValue_2 + QString::fromLocal8Bit("_1.0.0.zip");
		QString str7za_a = QString::fromLocal8Bit("/Device_Resource_Package_V3.0/7za.exe a -r xres_resource_") + m_qValue_1 + QString::fromLocal8Bit("_") + m_qValue_2 + QString::fromLocal8Bit("_1.0.0.zip xres_resource_") + m_qValue_1 + QString::fromLocal8Bit("_") + m_qValue_2 + QString::fromLocal8Bit("_1.0.0");
		Copy_Dir(DirPath1, DirPath28, true);
		Zip_Dir(str7za_a);
		Copy_File(DirPath29, DirPath30, true);

		///删除无用文件和文件夹
		DeleteFileOrDir(DirPath1);
		DeleteFileOrDir(DirPath26);
		DeleteFileOrDir(DirPath27_From);
		DeleteFileOrDir(DirPath28);
		DeleteFileOrDir(DirPath29);
	});
}

MyClass::~MyClass()
{

}

///创建文件夹
bool MyClass::Create_Dir(const QString &path)
{
	QDir dir(path);
	if (!dir.exists())
	{
		if (!dir.mkpath(path))
		{
			qDebug() << "Create path fail" << endl;
			return false;
		}
		else
		{
			qDebug() << "Create path success" << endl;
			return true;
		}
	}
	else
	{
		qDebug() << "path exist" << endl;
		return false;
	}
}

///拷贝文件夹
bool MyClass::Copy_Dir(const QString & fromDir, const QString & toDir, bool coverFileIfExist)
{
	QDir sourceDir(fromDir);
	QDir targetDir(toDir);
	if (!targetDir.exists())
	{
		/* 如果目标目录不存在，则进行创建 */
		if (!targetDir.mkdir(targetDir.absolutePath()))
		{
			return false;
		}
	}

	QFileInfoList fileInfoList = sourceDir.entryInfoList();
	foreach(QFileInfo fileInfo, fileInfoList)
	{
		if (fileInfo.fileName() == "." || fileInfo.fileName() == "..")
		{
			continue;

		}
		if (fileInfo.isDir())
		{    /* 当为目录时，递归的进行copy */
			if (!Copy_Dir(fileInfo.filePath(), targetDir.filePath(fileInfo.fileName()), coverFileIfExist))
			{
				return false;
			}
		}
		else
		{
			/* 当允许覆盖操作时，将旧文件进行删除操作 */
			if (coverFileIfExist && targetDir.exists(fileInfo.fileName()))
			{
				targetDir.remove(fileInfo.fileName());
			}
			/* 进行文件copy */
			if (!QFile::copy(fileInfo.filePath(), targetDir.filePath(fileInfo.fileName())))
			{
				return false;
			}
		}
	}
	return true;
}

///拷贝文件
bool MyClass::Copy_File(QString sourceDir, QString toDir, bool coverFileIfExist)
{
	toDir.replace("\\", "/");
	if (sourceDir == toDir)
	{
		return true;
	}
	if (!QFile::exists(sourceDir))
	{
		return false;
	}
	QDir *createfile = new QDir;
	bool exist = createfile->exists(toDir);
	if (exist)
	{
		if (coverFileIfExist)
		{
			createfile->remove(toDir);
		}
	}//end if

	if (!QFile::copy(sourceDir, toDir))
	{
		return false;
	}
	return true;
}

///替换需要修改的文件
bool MyClass::Replace_File(const QString & frompath, const QString & topath)
{
	QString srcData;
	QFile fromfile(frompath);
	if (!fromfile.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		return false;
	}
	QByteArray text = fromfile.readAll();
	srcData.prepend(text);
	if (srcData.contains("{1}"))
	{
		srcData.replace("{1}", m_qValue_1);
	}
	if (srcData.contains("{2}"))
	{
		srcData.replace("{2}", m_qValue_2);
	}
	if (srcData.contains("{3}"))
	{
		srcData.replace("{3}", m_qValue_3);
	}
	if (srcData.contains("{4}"))
	{
		srcData.replace("{4}", m_qValue_4);
	}
	if (srcData.contains("{5}"))
	{
		srcData.replace("{5}", "\"dhsdk_net\",\"onvif_net\",\"gb_reg\",\"gb35114_reg\",\"jt808_1078_reg\"");
	}
	if (srcData.contains("{6}"))
	{
		srcData.replace("{6}", "\"dhsdk_net\",\"onvif_net\",\"gb_reg\",\"gb35114_reg\"");
	}
	if (srcData.contains("{7}"))
	{
		srcData.replace("{7}", "\"dhsdk_net\",\"onvif_net\",\"gb_reg\",\"gb35114_reg\",\"jt808_1078_reg\"");
	}
	if (srcData.contains("{8}"))
	{
		srcData.replace("{8}", m_qValue_8);
	}
	if (srcData.contains("{9}"))
	{
		srcData.replace("{9}", m_qValue_9);
	}
	if (srcData.contains("{10}"))
	{
		srcData.replace("{10}", m_qValue_10);
	}
	if (srcData.contains("{11}"))
	{
		srcData.replace("{11}", m_qValue_11);
	}
	if (srcData.contains("{12}"))
	{
		srcData.replace("{12}", m_qValue_12);
	}
	if (srcData.contains("{13}"))
	{
		srcData.replace("{13}", m_qValue_13);
	}
	if (srcData.contains("{14}"))
	{
		srcData.replace("{14}", m_qValue_14);
	}
	if (srcData.contains("{15}"))
	{
		srcData.replace("{15}", m_qValue_15);
	}
	fromfile.close();

	QFile tofile(topath);
	if (tofile.open(QIODevice::WriteOnly | QIODevice::Truncate))
	{
		tofile.write(srcData.toStdString().data());
		tofile.close();
		return true;
	}
	return false;
}

///解压jar包
bool MyClass::Unjar_File(const QString& strJar)
{
	QProcess pJar(0);
	pJar.start(strJar);
	pJar.waitForStarted();
	pJar.waitForFinished();
	return true;
}

///压缩jar包
bool MyClass::Jar_File(const QString& strJar)
{
	QProcess pJar(0);
	pJar.start(strJar);
	pJar.waitForStarted();
	pJar.waitForFinished();
	return true;
}

///删除jar包中的文件
bool MyClass::Remove_InJarFile(const QString& str7za)
{
	QProcess pJar(0);
	pJar.start(str7za);
	pJar.waitForStarted();
	pJar.waitForFinished();
	return true;
}

///压缩zip包
bool MyClass::Zip_Dir(const QString& strZip)
{
	QProcess pZip(0);
	pZip.start(strZip);
	pZip.waitForStarted();
	pZip.waitForFinished();
	return true;
}

bool MyClass::DeleteFileOrDir(const QString & Path)
{
	if (Path.isEmpty() || !QDir().exists(Path))//是否传入了空的路径||路径是否存在
		return false;
	QFileInfo FileInfo(Path);
	if (FileInfo.isFile())//如果是文件
		QFile::remove(Path);
	else if (FileInfo.isDir())//如果是文件夹
	{
		QDir qDir(Path);
		qDir.removeRecursively();
	}
	return true;
}

