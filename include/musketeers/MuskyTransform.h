/*
 * @file MuskyTransform.h
 * @author Sumedh Koppula, Pratik Acharya, Rahul Karanam
 * @date 06th December 2021
 * @copyright Copyright [2021] [Sumedh Koppula, Pratik Acharya, Rahul Karanam]
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.'
 * @brief file for transformation of coordinate frames
 */

#ifndef MUSKYTRANSFORM_H
#define MUSKYTRANSFORM_H

class MuskyTransform {
 private:
  double x;
  double y;
  double theta;
  rviz::VisualizationManager* manager;
  rviz::DisplayGroup* rootDisplayGroup;

 public:
  void MuskyTransform(double x, double y, double theta);
  void transform_2d(origin_pf, origin_cf)
      : MuskyTransform(double x, double y, double theta);
};

#endif  // MUSKYTRANSFORM_H