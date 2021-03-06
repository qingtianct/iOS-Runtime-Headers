/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLVBOLoader : TSCH3DResourceLoader {
    unsigned int  mType;
}

+ (id)loaderWithType:(unsigned int)arg1;

- (BOOL)activateResource:(id)arg1 insideSession:(id)arg2;
- (void)bindHandle:(id)arg1 config:(void*)arg2;
- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;
- (id)generateHandleWithConfig:(void*)arg1;
- (unsigned int)hash;
- (id)initWithType:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)loadSingleValueInBuffer:(id)arg1;
- (void)setClientState:(const struct DataBufferInfo { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1;
- (unsigned int)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4;
- (unsigned int)usageOfResource:(id)arg1;

@end
