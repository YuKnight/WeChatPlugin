//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class MessageData, NSString, WCContactData;

__attribute__((visibility("hidden")))
@interface MMSessionInfo : NSObject <WCDBCoding>
{
    NSString *m_nsUserName;
    NSString *m_nsFilePath;
    unsigned int m_uUnReadCount;
    BOOL m_bShowUnReadAsRedDot;
    WCContactData *m_contact;
    MessageData *m_msgData;
    unsigned int m_uLastTime;
    BOOL m_bIsTop;
    unsigned int m_uTopTime;
    unsigned int m_uUnTopTime;
    unsigned int m_syncSessionOrder;
    unsigned int m_enterSessionTime;
    BOOL m_bMemOnly;
    BOOL _m_isMentionedUnread;
    unsigned int intRes1;
    unsigned int intRes2;
    unsigned int intRes3;
    NSString *strRes1;
    NSString *strRes2;
    NSString *strRes3;
    long long m___rowID;
}

+ (void)_initPBTableOfMMSessionInfo;
+ (id)dummyObject;
@property(nonatomic) BOOL m_isMentionedUnread; // @synthesize m_isMentionedUnread=_m_isMentionedUnread;
@property(nonatomic) BOOL m_bMemOnly; // @synthesize m_bMemOnly;
@property(nonatomic) unsigned int m_enterSessionTime; // @synthesize m_enterSessionTime;
@property unsigned int m_uUnTopTime; // @synthesize m_uUnTopTime;
@property unsigned int m_uTopTime; // @synthesize m_uTopTime;
@property BOOL m_bIsTop; // @synthesize m_bIsTop;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) MessageData *m_msgData; // @synthesize m_msgData;
@property(retain, nonatomic) WCContactData *m_contact; // @synthesize m_contact;
@property(nonatomic) unsigned int m_syncSessionOrder; // @synthesize m_syncSessionOrder;
@property unsigned int intRes3; // @synthesize intRes3;
@property unsigned int intRes2; // @synthesize intRes2;
@property unsigned int intRes1; // @synthesize intRes1;
@property(retain) NSString *strRes3; // @synthesize strRes3;
@property(retain) NSString *strRes2; // @synthesize strRes2;
@property(retain) NSString *strRes1; // @synthesize strRes1;
@property(nonatomic) unsigned int m_uLastTime; // @synthesize m_uLastTime;
@property(nonatomic) BOOL m_bShowUnReadAsRedDot; // @synthesize m_bShowUnReadAsRedDot;
@property(nonatomic) unsigned int m_uUnReadCount; // @synthesize m_uUnReadCount;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
- (void).cxx_destruct;
- (BOOL)isUnreadSession;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;
- (void)setFromPBSessionInfo:(id)arg1;
- (void)ignoreSyncSessionOrder;
- (void)dealloc;
- (id)init;
- (const basic_string_805fe43b *)getWCDBPrimaryColumnName;
- (const struct WCDBIndexHelper *)getWCDBIndexArray;
- (unsigned long long)getWCDBIndexArrayCount;
- (const map_d2afedfd *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const map_d2afedfd *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_d2afedfd *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_7a576766 *)getValueNameIndexMap;
- (id)getValueTable;
- (const WCDBCondition_8b94cd3d *)db_intRes3;
- (const WCDBCondition_8b94cd3d *)db_intRes2;
- (const WCDBCondition_8b94cd3d *)db_intRes1;
- (const WCDBCondition_0fe98630 *)db_strRes3;
- (const WCDBCondition_0fe98630 *)db_strRes2;
- (const WCDBCondition_0fe98630 *)db_strRes1;
- (const WCDBCondition_8b94cd3d *)db_m_uLastTime;
- (const WCDBCondition_ffb9cd26 *)db_m_bShowUnReadAsRedDot;
- (const WCDBCondition_8b94cd3d *)db_m_uUnReadCount;
- (const WCDBCondition_0fe98630 *)db_m_nsUserName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
