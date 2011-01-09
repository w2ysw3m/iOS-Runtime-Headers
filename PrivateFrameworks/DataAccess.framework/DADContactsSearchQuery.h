/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;



@interface DADContactsSearchQuery : DADSearchQuery 
{
    NSString *_searchBase;
    NSString *_searchScope;
}

@property(retain) NSString *searchScope;
@property(retain) NSString *searchBase;

+ (id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3;

- (id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3;
- (BOOL)isEqualToDADContactsSearchQuery:(id)arg1;
- (void)setSearchScope:(id)arg1;
- (id)searchBase;
- (void)setSearchBase:(id)arg1;
- (id)searchScope;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end