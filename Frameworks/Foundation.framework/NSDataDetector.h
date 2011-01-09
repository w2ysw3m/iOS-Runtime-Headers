/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSDataDetector : NSRegularExpression 
{
    unsigned long long _types;
}

@property(readonly) unsigned long long checkingTypes;

+ (void)initialize;
+ (id)dataDetectorWithTypes:(unsigned long long)arg1 error:(id*)arg2;

- (id)initWithPattern:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (NSUInteger)options;
- (void)finalize;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)pattern;
- (id)initWithTypes:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)checkingTypes;
- (NSUInteger)numberOfCaptureGroups;
- (void)enumerateMatchesInString:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3 usingBlock:(id)arg4;

@end