/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSMutableAttributedString, <SCROBrailleDriverProtocol>, NSData;



@interface SCROBrailleLine : NSObject 
{
    <SCROBrailleDriverProtocol> *_brailleDriver;
    NSInteger _size;
    NSInteger _statusSize;
    NSInteger _insetSize;
    NSInteger _lineOffset;
    NSInteger _leftInset;
    NSInteger _rightInset;
    NSInteger _masterStatusCellIndex;
    NSInteger _iBeamLocation;
    NSInteger _displayMode;
    BOOL _needsDisplayFlush;
    BOOL _needsStatusFlush;
    BOOL _blink;
    BOOL _currentUnread;
    BOOL _anyUnread;
    BOOL _isPanning;
    BOOL _showDotsSevenAndEight;
    char *_displayBuffer;
    char *_displayFilter;
    char *_blinkerBuffer;
    char *_statusFilter;
    NSData *_statusData;
    struct __CFArray { } *_chunkArray;
    struct __CFDictionary { } *_chunkDictionary;
    NSMutableAttributedString *_lineBuffer;
    id _appToken;
    NSInteger _firstToken;
    NSInteger _lastToken;
    struct { 
        NSData *data; 
        NSInteger alignment; 
        NSInteger length; 
        char *cells; 
    } _virtualStatus;
}

@property(readonly) BOOL needsDisplayFlush;

+ (void)initialize;

- (void)dealloc;
- (BOOL)_allowInset;
- (void)_updateOffsets;
- (BOOL)_blink:(BOOL)arg1;
- (void)_flushRealStatus;
- (void)_flush;
- (void)setCurrentUnread:(BOOL)arg1;
- (void)setAnyUnread:(BOOL)arg1;
- (BOOL)currentUnread;
- (BOOL)anyUnread;
- (void)setAppToken:(id)arg1;
- (NSInteger)tokenForRouterIndex:(NSInteger)arg1 location:(NSInteger*)arg2 appToken:(id*)arg3;
- (NSInteger)masterStatusCellIndex;
- (void)setShowDotsSevenAndEight:(BOOL)arg1;
- (BOOL)showDotsSevenAndEight;
- (id)initWithDriver:(id)arg1 mainSize:(NSInteger)arg2 statusSize:(NSInteger)arg3;
- (void)setFormatter:(id)arg1;
- (void)setVirtualStatus:(id)arg1 alignment:(NSInteger)arg2;
- (void)setRealStatus:(id)arg1;
- (id)createLineDescriptor;
- (void)setMainSize:(NSInteger)arg1;
- (void)setStatusSize:(NSInteger)arg1;
- (BOOL)getStatusRouterIndex:(NSInteger*)arg1 forRawIndex:(NSInteger)arg2;
- (id)appToken;
- (NSInteger)firstToken;
- (NSInteger)lastToken;
- (void)blinker;
- (BOOL)needsDisplayFlush;
- (void)setMasterStatusCellIndex:(NSInteger)arg1;
- (BOOL)panLeft;
- (BOOL)panRight;
- (BOOL)canPanRight;
- (BOOL)canPanLeft;
- (void)setDisplayMode:(NSInteger)arg1;
- (NSInteger)displayMode;
- (BOOL)display;

@end