//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSString, WEWCloudCommentList, WEWCloudObjectAcl;

@interface WEWCloudObjectEntry : NSObject <NSCoding, NSCopying>
{
    int _uploaderrorcode;
    NSString *_objectid;
    NSString *_name;
    unsigned long long _size;
    unsigned long long _ctime;
    unsigned long long _mtime;
    unsigned long long _type;
    NSString *_parentobjectid;
    NSString *_topobjectid;
    unsigned long long _status;
    unsigned long long _createvid;
    NSData *_sha1;
    NSString *_creatername;
    unsigned long long _aclopbits;
    WEWCloudObjectAcl *_acl;
    unsigned long long _subfilecnt;
    NSData *_fileid;
    NSData *_clouddiskdirinfo;
    WEWCloudCommentList *_comments;
    unsigned long long _topautogen;
    unsigned long long _objectEntryType;
    NSString *_localfilepath;
    unsigned long long _uploadstate;
    NSString *_createrName;
}

@property(copy, nonatomic) NSString *createrName; // @synthesize createrName=_createrName;
@property(nonatomic) int uploaderrorcode; // @synthesize uploaderrorcode=_uploaderrorcode;
@property(nonatomic) unsigned long long uploadstate; // @synthesize uploadstate=_uploadstate;
@property(copy, nonatomic) NSString *localfilepath; // @synthesize localfilepath=_localfilepath;
@property(nonatomic) unsigned long long objectEntryType; // @synthesize objectEntryType=_objectEntryType;
@property(nonatomic) unsigned long long topautogen; // @synthesize topautogen=_topautogen;
@property(retain, nonatomic) WEWCloudCommentList *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) NSData *clouddiskdirinfo; // @synthesize clouddiskdirinfo=_clouddiskdirinfo;
@property(retain, nonatomic) NSData *fileid; // @synthesize fileid=_fileid;
@property(nonatomic) unsigned long long subfilecnt; // @synthesize subfilecnt=_subfilecnt;
@property(retain, nonatomic) WEWCloudObjectAcl *acl; // @synthesize acl=_acl;
@property(nonatomic) unsigned long long aclopbits; // @synthesize aclopbits=_aclopbits;
@property(copy, nonatomic) NSString *creatername; // @synthesize creatername=_creatername;
@property(retain, nonatomic) NSData *sha1; // @synthesize sha1=_sha1;
@property(nonatomic) unsigned long long createvid; // @synthesize createvid=_createvid;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *topobjectid; // @synthesize topobjectid=_topobjectid;
@property(copy, nonatomic) NSString *parentobjectid; // @synthesize parentobjectid=_parentobjectid;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long mtime; // @synthesize mtime=_mtime;
@property(nonatomic) unsigned long long ctime; // @synthesize ctime=_ctime;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *objectid; // @synthesize objectid=_objectid;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isSelfAdmin;

@end

