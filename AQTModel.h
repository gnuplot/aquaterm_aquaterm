//
//  AQTModel.h
//  AquaTerm
//
//  Created by per on Fri Nov 02 2001.
//  Copyright (c) 2001 AquaTerm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AQTGraphic.h"

@class AQTColorMap;

@interface AQTModel : AQTGraphic /*" NSObject "*/ 
{
    NSMutableArray	*modelObjects;	/*" An array of AQTGraphic objects (leaf or collection) "*/
    AQTColorMap		*modelColorMap; /*" A model-wide mapping of colors so that the (single) property inspector knows the colormap of each window (model) "*/
    NSString 		*title;			/*" Associate a title with the model. Default is 'Figure n'. "*/
    // ---- Timing for adapter testing -----
  	double			timeTaken;
}
-(id)initWithSize:(NSSize)canvasSize;
-(int)count;
-(void)addObject:(AQTGraphic *)graphic;
-(void)removeObject:(AQTGraphic *)graphic;
-(void)removeObjectsInRect:(NSRect)targetRect;
-(void)renderInRect:(NSRect)boundsRect;
-(void)setColormap:(AQTColorMap *)newColorMap;
-(AQTColorMap *)colormap;
-(void)setTitle:(NSString *)newTitle;
-(NSString *)title;
// ---- Timing for adapter testing -----
-(double)timeTaken;
-(void)setTimeTaken:(double)timer;
@end
