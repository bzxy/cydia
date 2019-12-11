/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/XXUnknownSuperclass.h>

@class NSString;

@interface MSShareStateNotificationString : XXUnknownSuperclass {
@private
	NSString *_sourcePersonID;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_body;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *body;	// G=0x1dc09; S=0x1dc19; @synthesize=_body
@property(retain, nonatomic) NSString *title;	// G=0x1dbd5; S=0x1dbe5; @synthesize=_title
@property(retain, nonatomic) NSString *sourcePersonID;	// G=0x1dba1; S=0x1dbb1; @synthesize=_sourcePersonID
+ (id)notificationStringsWithTitle:(id)title body:(id)body sourcePersonID:(id)anId;	// 0x1da55
// declared property setter: - (void)setBody:(id)body;	// 0x1dc19
// declared property getter: - (id)body;	// 0x1dc09
// declared property setter: - (void)setTitle:(id)title;	// 0x1dbe5
// declared property getter: - (id)title;	// 0x1dbd5
// declared property setter: - (void)setSourcePersonID:(id)anId;	// 0x1dbb1
// declared property getter: - (id)sourcePersonID;	// 0x1dba1
- (void)dealloc;	// 0x1db2d
- (id)initWithTitle:(id)title body:(id)body sourcePersonID:(id)anId;	// 0x1da9d
@end