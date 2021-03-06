/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDictionary, NSMutableDictionary;

@interface GKFriendPickerListSection : GKTableSection {
    NSMutableDictionary *_cellStatusDict;
    unsigned int _headerTitle;
    int _maxPlayers;
    int _numSelected;
    NSDictionary *_ranks;
    unsigned int _scope;
    float _topMargin;
}

@property(retain) NSMutableDictionary * cellStatusDict;
@property unsigned int headerTitle;
@property int maxPlayers;
@property int numSelected;
@property(retain) NSDictionary * ranks;
@property unsigned int scope;
@property float topMargin;

- (id)cellStatusDict;
- (int)columnCountInTableView:(id)arg1;
- (void)dealloc;
- (void)filterWithSearchText:(id)arg1;
- (unsigned int)headerTitle;
- (float)heightForFooterInTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (id)init;
- (int)maxPlayers;
- (int)numSelected;
- (id)ranks;
- (unsigned int)scope;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (void)setCellStatusDict:(id)arg1;
- (void)setHeaderTitle:(unsigned int)arg1;
- (void)setMaxPlayers:(int)arg1;
- (void)setNumSelected:(int)arg1;
- (void)setRanks:(id)arg1;
- (void)setScope:(unsigned int)arg1;
- (void)setTopMargin:(float)arg1;
- (void)tableView:(id)arg1 didSelectIndexPath:(id)arg2;
- (int)tableView:(id)arg1 indexOfItemForPlayerID:(id)arg2;
- (void)tableView:(id)arg1 loadAdditionalDataForItems:(id)arg2 thenUpdateView:(id)arg3;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectIndexPath:(id)arg2;
- (id)titleForHeaderInTableView:(id)arg1;
- (float)topMargin;

@end
