//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PrtlBase.h"

@class NSString;

@interface CGetBottleCountPrtl : PrtlBase
{
    NSString *m_nsUsrName;
    unsigned int m_uiTime;
}

@property(nonatomic) unsigned int m_uiTime; // @synthesize m_uiTime;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (void).cxx_destruct;
- (_Bool)HandleResp:(void *)arg1;
- (void)InitReq:(void *)arg1;
- (void)dealloc;
- (id)init;

@end
