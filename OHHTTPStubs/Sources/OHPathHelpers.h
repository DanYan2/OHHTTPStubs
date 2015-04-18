//
//  OHPathHelpers.h
//  Pods
//
//  Created by Olivier Halligon on 18/04/2015.
//
//

#import <Foundation/Foundation.h>

#ifdef NS_ASSUME_NONNULL_BEGIN
  NS_ASSUME_NONNULL_BEGIN
  #define _nullable_ __nullable
#else
  #define _nullable_
#endif


/**
 *  Useful function to build a path given a file name and a bundle.
 *
 *  @param fileName The name of the file to get the path to, including file extension
 *  @param inBundleForClass The class of the caller, used to determine the current bundle
 *                          in which the file is supposed to be located.
 *                          You should typically pass `self.class` (ObjC) or
 *                          `self.dynamicType` (Swift) when calling this function.
 *
 *  @return The path of the given file in the same bundle as the inBundleForClass class
 */
NSString* _nullable_ OHPathForFile(NSString* fileName, Class inBundleForClass);


/**
 *  Useful function to build a path to a file in the Documents's directory in the
 *  app sandbox, used by iTunes File Sharing for example.
 *
 *  @param fileName The name of the file to get the path to, including file extension
 *
 *  @return The path of the file in the Documents directory in your App Sandbox
 */
NSString* _nullable_ OHPathForFileInDocumentsDir(NSString* fileName);



/**
 *  Useful function to build an NSBundle located in the application's resources simply from its name
 *
 *  @param bundleBasename The base name, without extension (extension is assumed to be ".bundle").
 *  @param inBundleForClass The class of the caller, used to determine the current bundle
 *                          in which the file is supposed to be located.
 *                          You should typically pass `self.class` (ObjC) or
 *                          `self.dynamicType` (Swift) when calling this function.
 *
 *  @return The NSBundle object representing the bundle with the given basename located in your application's resources.
 */
NSBundle* _nullable_ OHResourceBundle(NSString* bundleBasename, Class inBundleForClass);


#ifdef NS_ASSUME_NONNULL_END
  NS_ASSUME_NONNULL_END
#endif