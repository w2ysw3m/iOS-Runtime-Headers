/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDTableCell, NSMutableArray, WDDocument;



@interface WDText : NSObject 
{
    NSMutableArray *mBlocks;
    WDDocument *mDocument;
    NSInteger mTextType;
    WDTableCell *mTableCell;
}


- (id)content;
- (id)tableCell;
- (void)dealloc;
- (BOOL)isEmpty;
- (void)addBlock:(id)arg1;
- (id)blocks;
- (NSInteger)indexOfBlock:(id)arg1;
- (id)addParagraphAtIndex:(NSInteger)arg1;
- (id)addTableAtIndex:(NSInteger)arg1;
- (void)removeLastBlock;
- (NSInteger)tableNestingLevel;
- (NSInteger)textType;
- (id)blockIterator;
- (id)newBlockIterator;
- (void)removeLastCharacter:(unsigned short)arg1;
- (id)runIterator;
- (id)newRunIterator;
- (id)initWithDocument:(id)arg1 textType:(NSInteger)arg2 tableCell:(id)arg3;
- (id)initWithDocument:(id)arg1 textType:(NSInteger)arg2;
- (id)lastBlock;
- (id)addTable;
- (id)document;
- (id)addParagraph;
- (NSInteger)blockCount;
- (id)blockAt:(NSInteger)arg1;

@end