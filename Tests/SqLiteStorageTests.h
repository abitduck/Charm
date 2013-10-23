#ifndef SQLITESTORAGETEST_H
#define SQLITESTORAGETEST_H

#include <QObject>

#include "Core/Configuration.h"
#include "Core/StorageInterface.h"

class SqLiteStorageTests : public QObject
{
    Q_OBJECT
public:
    SqLiteStorageTests();

private:
    StorageInterface* m_storage;
    Configuration m_configuration;
    QString m_localPath;

private Q_SLOTS:
    void initTestCase ();

    void connectAndCreateDatabaseTest();

    void makeModifyDeleteInstallationTest();

    void makeModifyDeleteUserTest();

    void makeModifyDeleteTasksTest();

    void makeModifyDeleteEventsTest();

    void addDeleteSubscriptionsTest();

    void setGetMetaDataTest();

    void deleteTaskWithEventsTest();

    void cleanupTestCase();
};

#endif
