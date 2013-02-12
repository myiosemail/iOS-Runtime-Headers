/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CalDAVPrincipalSearchPropertySet, NSSet;

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask {
    void *_searchContext;
    NSSet *_searchStrings;
    NSSet *_searchTypes;
    CalDAVPrincipalSearchPropertySet *_serverSupportSet;
}

@property void* searchContext;
@property(retain) NSSet * searchStrings;
@property(retain) NSSet * searchTypes;
@property(retain) CalDAVPrincipalSearchPropertySet * serverSupportSet;

+ (id)_propertiesToFindForServerSupportSet:(id)arg1;

- (void)dealloc;
- (id)extraAttributes;
- (id)initWithSearchStrings:(id)arg1 searchTypes:(id)arg2 serverSupportSet:(id)arg3 atURL:(id)arg4;
- (void*)searchContext;
- (id)searchItems;
- (id)searchStrings;
- (id)searchTypes;
- (id)serverSupportSet;
- (void)setSearchContext:(void*)arg1;
- (void)setSearchStrings:(id)arg1;
- (void)setSearchTypes:(id)arg1;
- (void)setServerSupportSet:(id)arg1;

@end