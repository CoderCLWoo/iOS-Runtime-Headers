/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class NSString;

@interface IMDChatStore : NSObject {
    NSString *_lastModificationStamp;
}

@property(retain) NSString * modificationStamp;

+ (id)sharedInstance;

- (id)_chatWithGUID:(id)arg1;
- (void)_updateModificationDate;
- (void)addMessageWithGUID:(id)arg1 toChat:(id)arg2;
- (void)archiveChat:(id)arg1;
- (id)chatWithGUID:(id)arg1;
- (id)chatsGUIDsForMessageWithGUID:(id)arg1;
- (id)chatsWithHandle:(id)arg1 onService:(id)arg2;
- (id)chatsWithRoomname:(id)arg1 onService:(id)arg2;
- (void)dealloc;
- (void)deleteChat:(id)arg1;
- (unsigned int)failedCountForChat:(id)arg1;
- (id)init;
- (id)loadAllChats;
- (id)modificationStamp;
- (void)removeMessageWithGUID:(id)arg1 fromChat:(id)arg2;
- (int)rowIDOfMostRecentFailedMessageInChat:(id)arg1;
- (void)setModificationStamp:(id)arg1;
- (id)storeChat:(id)arg1;
- (void)unarchiveChat:(id)arg1;
- (unsigned int)unreadCountForChat:(id)arg1;
- (id)updateChat:(id)arg1;

@end