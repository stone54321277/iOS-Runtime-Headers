/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStackedAreaElementBuilder : TSCHAreaElementBuilder {
}

- (BOOL)p_addBottomStroke:(struct { id x1; id x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; id x4; id x5; }*)arg1 toPath:(struct CGPath { }*)arg2 seriesIndex:(unsigned int)arg3 valuesStart:(unsigned int)arg4 valuesEnd:(unsigned int)arg5 withPointsArray:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; BOOL x3; unsigned int x4; }*)arg6 withCount:(unsigned int)arg7;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; BOOL x2; }*)p_centerPointsForSeries:(id)arg1 forGroupIndexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4 plotAreaFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; BOOL x3; unsigned int x4; }*)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 valueStart:(int)arg3 valueEnd:(int)arg4 outCount:(unsigned int*)arg5;

@end
