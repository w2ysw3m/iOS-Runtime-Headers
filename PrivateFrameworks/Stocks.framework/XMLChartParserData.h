/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSString, StockChartData;

@interface XMLChartParserData : NSObject {
    NSString *_bufferString;
    StockChartData *_chartData;
    double lastTime;
    BOOL marketTimeZoneSet;
    int state;
    unsigned int valueIndex;
}

@property(retain) NSString * bufferString;
@property(retain) StockChartData * chartData;

- (void).cxx_destruct;
- (id)bufferString;
- (id)chartData;
- (void)setBufferString:(id)arg1;
- (void)setChartData:(id)arg1;

@end