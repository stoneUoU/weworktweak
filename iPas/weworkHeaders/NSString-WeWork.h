//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (WeWork)
+ (id)ReadableTimeWithSecFromBeginningDay:(unsigned int)arg1;
+ (id)ShareToWeiXinHTMLStringFromForwardMessageWithSubject:(id)arg1 andMessages:(id)arg2 andForwardMessageVec:(vector_f14f4326)arg3;
+ (id)ShareToWeiXinHTMLStringFromMessageListWithSubject:(id)arg1 andMessages:(id)arg2 andConversation:(scoped_refptr_fd92d7bf)arg3;
+ (id)unSupportMsgTipsWithType:(unsigned int)arg1;
+ (id)remainTimeTipsWithEndTime:(long long)arg1;
+ (id)detailIntroduceWithUser:(const scoped_refptr_e1f85e48 *)arg1;
+ (id)interfaceJobWithUser:(const scoped_refptr_e1f85e48 *)arg1 underDepartmentID:(unsigned long long)arg2;
+ (id)interfaceJobWithUser:(const scoped_refptr_e1f85e48 *)arg1;
+ (id)associatedJobWithUser:(const scoped_refptr_e1f85e48 *)arg1 underDepartmentID:(unsigned long long)arg2;
+ (void)fullPathWithModelUser:(const scoped_refptr_e1f85e48 *)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)fullPathWithModelDepartment:(const scoped_refptr_85c18dd7 *)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)mainJobWithPbUser:(const struct User *)arg1;
+ (id)mainJobWithUser:(const scoped_refptr_e1f85e48 *)arg1;
+ (id)buildNumber;
+ (id)fourPartVersionNumber;
+ (id)correctReportVersionNumber;
+ (id)correctRDMVersionNumber;
+ (id)mailAttachmentNameWithNameIndex:(long long)arg1 pathExtension:(id)arg2;
+ (id)parentDepartmentChainString:(const vector_a024b487 *)arg1;
- (id)imagePathForURL;
- (_Bool)isQQMail;
- (_Bool)isGmailMail;
- (id)truncateSubstringToIndex:(unsigned long long)arg1;
- (id)avatarUrlForWidthInPixel:(long long)arg1;
- (id)avatarPreviewUrl;
- (id)avatarOriginalUrl;
- (id)avatarThumbnailUrl;
- (id)avatarCanonicalUrl;
- (id)imageUrlForSize:(long long)arg1;
- (id)imageSmartThumbnailUrl;
- (id)imagePreviewUrl;
- (id)imageOriginalUrl;
- (id)imageThumbnailUrl;
- (id)imageCanonicalUrl;
- (_Bool)isValidPhoneNumber;
- (struct _NSRange)validateEmailWithPrefix:(id)arg1 withSuffix:(id)arg2;
- (_Bool)isValidMailAddress;
- (_Bool)isValidIntetnationMobileNumber;
- (_Bool)isValidMobileNumber;
- (id)correctLittleUnReadNumber;
- (id)correctLargeUnReadNumber;
- (id)correctLocalPushAlertBody;
@end
