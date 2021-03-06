//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WiFiPolicy/WFLoggerBase.h>

@class NSNumber, NSObject;
@protocol OS_dispatch_source;

@interface WFLoggerFile : WFLoggerBase
{
    struct __CFRunLoopTimer *_loggingTimer;
    struct __CFRunLoop *_runLoopRef;
    struct __CFString *_runLoopMode;
    unsigned char _classC;
    NSNumber *_logLifespanInDays;
    unsigned long long _privacy;
    unsigned long long _level;
    struct __CFString *_logFilePath;
    NSObject<OS_dispatch_source> *_eventSource;
    unsigned char _isFileLoggingEnabled;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_filePtr;
    struct __CFDate *_fileCreationDate;
    struct __CFDateFormatter *_dateFormatter;
    struct __CFString *_presetFilePath;
    struct __CFString *_directoryPath;
    struct __CFString *_fileNamePrefix;
    unsigned long long _maxFileSizeInBytes;
    unsigned long long _timerInterval;
    unsigned long long _fileAgeOutInterval;
}

- (unsigned long long)getLogLevelPersist;
- (void)setLogLevelPersist:(unsigned long long)arg1;
- (unsigned long long)getLogLevelEnable;
- (void)setLogLevelEnable:(unsigned long long)arg1;
- (unsigned long long)getLogPrivacy;
- (void)setLogPrivacy:(unsigned long long)arg1;
- (id)getLogLifespanInDays;
- (void)setLogLifespanInDays:(id)arg1;
- (unsigned long long)getMaxFileSizeInMB;
- (void)setMaxFileSizeInMB:(unsigned long long)arg1;
- (void)rotateLogFile:(struct __CFString *)arg1;
- (unsigned char)doesLogFileExist:(struct __CFString *)arg1;
- (void)removeLogFile:(const char *)arg1 maxAge:(double)arg2;
- (void)createLogFile:(struct __CFString *)arg1 fileClassC:(unsigned char)arg2;
- (void)removeLogFilesFromDir:(const char *)arg1;
- (void)cleanStaleLogs;
- (struct __CFString *)changeLogFile:(unsigned char)arg1;
- (unsigned char)checkLogFileUpdate:(struct __CFString *)arg1;
- (void)stopWatchingLogFile;
- (void)startWatchingLogFile;
- (struct __CFString *)generateLogFileName;
- (struct __CFString *)createDateString;
- (void)schedule:(unsigned char)arg1;
- (void)init:(id)arg1 runLoopRef:(struct __CFRunLoop *)arg2 runLoopMode:(struct __CFString *)arg3 classC:(unsigned char)arg4 dateFormatter:(struct __CFDateFormatter *)arg5 maxFileSizeInMB:(unsigned long long)arg6 logLifespanInDays:(unsigned long long)arg7;
- (id)initWithFilePath:(id)arg1 filePath:(struct __CFString *)arg2 runLoopRef:(struct __CFRunLoop *)arg3 runLoopMode:(struct __CFString *)arg4 classC:(unsigned char)arg5 dateFormatter:(struct __CFDateFormatter *)arg6 maxFileSizeInMB:(unsigned long long)arg7 logLifespanInDays:(unsigned long long)arg8 dispatchQueue:(id)arg9;
- (id)initWithDirectoryPath:(id)arg1 dirPath:(struct __CFString *)arg2 fileNamePrefix:(struct __CFString *)arg3 runLoopRef:(struct __CFRunLoop *)arg4 runLoopMode:(struct __CFString *)arg5 classC:(unsigned char)arg6 dateFormatter:(struct __CFDateFormatter *)arg7 maxFileSizeInMB:(unsigned long long)arg8 logLifespanInDays:(unsigned long long)arg9 dispatchQueue:(id)arg10;
- (void)dealloc;
- (void)writeToFile:(unsigned long long)arg1 cfStrMsg:(struct __CFString *)arg2;
- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 cfStrMsg:(struct __CFString *)arg3;
- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 message:(const char *)arg3 valist:(struct __va_list_tag [1])arg4;
- (id)mapLogLevelEnum:(unsigned long long)arg1;
@property(readonly, getter=getLogFileNamePrefix) const struct __CFString *logFileNamePrefix;
@property(readonly, getter=getLogDirPath) const struct __CFString *logDirPath;
@property(readonly, getter=getLogFilePath) const struct __CFString *logFilePath;

@end

