/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncGroupChecksum : AceObject <SAAceSerializable>

@property (nonatomic) int count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domainObjectClass;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *identifierChecksum;
@property (readonly) Class superclass;
@property (nonatomic, retain) SASyncAnchor *syncAnchor;

+ (id)groupChecksum;
+ (id)groupChecksumWithDictionary:(id)arg1 context:(id)arg2;

- (int)count;
- (id)domainObjectClass;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifierChecksum;
- (void)setCount:(int)arg1;
- (void)setDomainObjectClass:(id)arg1;
- (void)setIdentifierChecksum:(id)arg1;
- (void)setSyncAnchor:(id)arg1;
- (id)syncAnchor;

@end