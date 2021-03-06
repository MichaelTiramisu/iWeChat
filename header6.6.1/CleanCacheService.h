//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IAppTrafficExt-Protocol.h"
#import "MMService-Protocol.h"

@class CleanTaskInfo, NSMutableArray, NSRecursiveLock, NSString, NSThread;

@interface CleanCacheService : MMService <MMService, IAppTrafficExt>
{
    NSMutableArray *_arrDoneTask;
    NSMutableArray *_arrWaitTask;
    CleanTaskInfo *_curTaskInfo;
    NSMutableArray *_arrSubFolderName;
    NSMutableArray *_arrSubFileName;
    NSThread *_taskThread;
    NSRecursiveLock *_lock;
    int _runStatus;
    unsigned int _cleanedTotalSize;
    unsigned int _receivedTotalSize;
}

+ (long long)randomIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)onReceiveDataLen:(unsigned int)arg1;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)dealloc;
- (id)init;
- (void)forceStop;
- (void)asyncPause;
- (void)asyncStart;
- (void)start;
- (void)threadFunc;
- (_Bool)shouldDeletePath:(id)arg1;
- (void)reportCleanPerformance;
- (void)addAutoCleanTask:(id)arg1;
- (_Bool)canAddTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

