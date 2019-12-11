/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/XXUnknownSuperclass.h>

@class NSDateComponents;

@interface CalDAVContainerSyncTaskGroup : XXUnknownSuperclass {
	BOOL _getScheduleTags;	// 137 = 0x89
	BOOL _getScheduleChanges;	// 138 = 0x8a
	BOOL _syncEvents;	// 139 = 0x8b
	BOOL _syncTodos;	// 140 = 0x8c
	BOOL _supportsExtendedCalendarQuery;	// 141 = 0x8d
	int _fetchingEtagState;	// 144 = 0x90
	NSDateComponents *_eventFilterStartDate;	// 148 = 0x94
	NSDateComponents *_eventFilterEndDate;	// 152 = 0x98
	NSDateComponents *_todoFilterStartDate;	// 156 = 0x9c
	NSDateComponents *_todoFilterEndDate;	// 160 = 0xa0
}
@property(assign) BOOL getScheduleTags;	// G=0x4c89; S=0x4c99; @synthesize=_getScheduleTags
@property(assign) BOOL getScheduleChanges;	// G=0x4c69; S=0x4c79; @synthesize=_getScheduleChanges
@property(assign) BOOL syncEvents;	// G=0x4c49; S=0x4c59; @synthesize=_syncEvents
@property(assign) BOOL syncTodos;	// G=0x4c29; S=0x4c39; @synthesize=_syncTodos
@property(assign) BOOL supportsExtendedCalendarQuery;	// G=0x4c09; S=0x4c19; @synthesize=_supportsExtendedCalendarQuery
@property(retain) NSDateComponents *eventFilterStartDate;	// G=0x4d65; S=0x4d41; @synthesize=_eventFilterStartDate
@property(retain) NSDateComponents *eventFilterEndDate;	// G=0x4da1; S=0x4d7d; @synthesize=_eventFilterEndDate
@property(retain) NSDateComponents *todoFilterStartDate;	// G=0x4ddd; S=0x4db9; @synthesize=_todoFilterStartDate
@property(retain) NSDateComponents *todoFilterEndDate;	// G=0x4e19; S=0x4df5; @synthesize=_todoFilterEndDate
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions accountInfoProvider:(id)provider taskManager:(id)manager appSpecificCalendarItemClass:(Class)aClass;	// 0x4ca9
- (void)dealloc;	// 0x57e9
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x5749
- (id)copyGetTaskWithURL:(id)url;	// 0x5711
- (id)copyPutTaskWithPayloadItem:(id)payloadItem forAction:(id)action;	// 0x5629
- (void)applyAdditionalPropertiesFromPutTask:(id)putTask;	// 0x556d
- (void)applyAdditionalPropertiesFromPostTask:(id)postTask;	// 0x54b1
- (BOOL)shouldFetchMoreETags;	// 0x5479
- (BOOL)_shouldFetchEventsForState:(int)state;	// 0x544d
- (BOOL)_shouldFetchTodosForState:(int)state;	// 0x5421
- (id)copyGetEtagTaskWithPropertiesToFind:(id)find;	// 0x4fe9
- (id)dataContentType;	// 0x4bfd
- (BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;	// 0x4f69
- (id)copyAdditionalResourcePropertiesToFetch;	// 0x4ef1
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes accountInfoProvider:(id)provider taskManager:(id)manager appSpecificCalendarItemClass:(Class)aClass;	// 0x4e91
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x4e31
// declared property getter: - (id)todoFilterEndDate;	// 0x4e19
// declared property setter: - (void)setTodoFilterEndDate:(id)date;	// 0x4df5
// declared property getter: - (id)todoFilterStartDate;	// 0x4ddd
// declared property setter: - (void)setTodoFilterStartDate:(id)date;	// 0x4db9
// declared property getter: - (id)eventFilterEndDate;	// 0x4da1
// declared property setter: - (void)setEventFilterEndDate:(id)date;	// 0x4d7d
// declared property getter: - (id)eventFilterStartDate;	// 0x4d65
// declared property setter: - (void)setEventFilterStartDate:(id)date;	// 0x4d41
// declared property getter: - (BOOL)supportsExtendedCalendarQuery;	// 0x4c09
// declared property setter: - (void)setSupportsExtendedCalendarQuery:(BOOL)query;	// 0x4c19
// declared property getter: - (BOOL)syncTodos;	// 0x4c29
// declared property setter: - (void)setSyncTodos:(BOOL)todos;	// 0x4c39
// declared property getter: - (BOOL)syncEvents;	// 0x4c49
// declared property setter: - (void)setSyncEvents:(BOOL)events;	// 0x4c59
// declared property getter: - (BOOL)getScheduleChanges;	// 0x4c69
// declared property setter: - (void)setGetScheduleChanges:(BOOL)changes;	// 0x4c79
// declared property getter: - (BOOL)getScheduleTags;	// 0x4c89
// declared property setter: - (void)setGetScheduleTags:(BOOL)tags;	// 0x4c99
@end