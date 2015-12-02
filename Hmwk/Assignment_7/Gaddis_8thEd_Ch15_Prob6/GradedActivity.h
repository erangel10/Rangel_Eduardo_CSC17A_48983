/* 
 * File:   GradedActivity.h
 * Author: EDUARDO
 *
 * Created on December 1, 2015, 6:59 PM
 */

#ifndef GRADEDACTIVITY_H
#define	GRADEDACTIVITY_H

class GradedActivity
 {
     protected:
         float score; // To hold the numeric score
         
     public:
         // Default constructor
         GradedActivity()
         { score = 0.0; }

         // Constructor
         GradedActivity(float s)
         { score = s; }

         // Mutator function
         void setScore(float s)
         { score = s; }

         // Accessor functions
        virtual float getScore() const
         { return score; }

         virtual char getLetterGrade() const;
 };


#endif	/* GRADEDACTIVITY_H */

