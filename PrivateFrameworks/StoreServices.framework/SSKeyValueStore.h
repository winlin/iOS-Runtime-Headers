/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSKeyValueStoreDatabase, SSXPCConnection;

@interface SSKeyValueStore : NSObject {
    SSXPCConnection *_connection;
    SSKeyValueStoreDatabase *_database;
    BOOL _useLocalRead;
    BOOL _useLocalWrite;
}

@property(getter=isLocalReadable,readonly) BOOL localReadable;
@property(getter=isLocalWritable,readonly) BOOL localWritable;

+ (BOOL)isLocalReadable;

- (id)copyAccountDictionaryForDomain:(id)arg1;
- (id)copyAccounts;
- (void)dealloc;
- (void)getValueForDomain:(id)arg1 key:(id)arg2 usingBlock:(id)arg3;
- (void)getValuesForDomain:(id)arg1 keys:(const id*)arg2 count:(unsigned int)arg3 usingBlock:(id)arg4;
- (id)iTunesValueForKey:(id)arg1 usedDomain:(id*)arg2;
- (id)init;
- (BOOL)isLocalReadable;
- (BOOL)isLocalWritable;
- (void)modifyUsingTransactionBlock:(id)arg1;
- (void)readUsingSessionBlock:(id)arg1;
- (void)removeAccountFromDomain:(id)arg1;
- (void)removeAllValuesForDomain:(id)arg1 completionBlock:(id)arg2;
- (void)removeAllValuesForDomain:(id)arg1;
- (void)removeAllValuesWithCompletionBlock:(id)arg1;
- (void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 completionBlock:(id)arg4;
- (void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 completionBlock:(id)arg3;
- (void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2;

@end
