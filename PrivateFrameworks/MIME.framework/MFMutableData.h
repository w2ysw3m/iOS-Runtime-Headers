/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */



@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying>
{
    void *_bytes;
    NSUInteger _length;
    NSUInteger _mappedLength;
    NSUInteger _capacity;
    NSUInteger _threshold;
    char *_path;
    NSInteger _fd;
    NSUInteger _flushFrom;
    BOOL _flush;
    BOOL _immutable;
    BOOL _vm;
}


- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (BOOL)writeToFile:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithLength:(NSUInteger)arg1;
- (const void*)mutableBytes;
- (void)appendData:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBytes:(const void*)arg1 length:(NSUInteger)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(NSUInteger)arg2 freeWhenDone:(BOOL)arg3;
- (void)appendBytes:(const void*)arg1 length:(NSUInteger)arg2;
- (NSUInteger)length;
- (id)init;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (const void*)bytes;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(NSUInteger)arg2;
- (void)setLength:(NSUInteger)arg1;
- (id)subdataWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (void)mf_makeImmutable;
- (id)_initWithFd:(NSInteger)arg1 path:(id)arg2 mutable:(BOOL)arg3;
- (void)setMappingThreshold:(NSUInteger)arg1;
- (void)_flushToDisk:(NSUInteger)arg1 capacity:(NSUInteger)arg2;
- (void)_mapMutableData:(BOOL)arg1;
- (BOOL)mf_immutable;

@end