/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, NSDictionary, NSString;

@interface MFMailAccountProxy : NSObject {
    NSDictionary *_properties;
}

@property(readonly) NSArray * emailAddresses;
@property(readonly) NSString * firstEmailAddress;
@property(readonly) NSArray * fromEmailAddresses;
@property(readonly) NSArray * fromEmailAddressesIncludingDisabled;
@property(readonly) NSString * fullUserName;
@property(readonly) BOOL isDefaultDeliveryAccount;
@property(readonly) id mailAccount;
@property(readonly) BOOL restrictsRepliesAndForwards;
@property(readonly) BOOL supportsSoftBankCodePoints;
@property(readonly) NSString * uniqueID;
@property(readonly) NSString * username;

- (id)_emailAddressesAndAliases;
- (id)_initWithProperties:(id)arg1;
- (BOOL)_isActive;
- (BOOL)_isRestricted;
- (void)dealloc;
- (id)emailAddresses;
- (id)firstEmailAddress;
- (id)fromEmailAddresses;
- (id)fromEmailAddressesIncludingDisabled;
- (id)fullUserName;
- (BOOL)isDefaultDeliveryAccount;
- (id)mailAccount;
- (BOOL)restrictsRepliesAndForwards;
- (BOOL)supportsSoftBankCodePoints;
- (id)uniqueID;
- (id)username;

@end