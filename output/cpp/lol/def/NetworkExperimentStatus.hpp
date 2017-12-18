#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct NetworkExperimentStatus {  
    Completed_e = 3,
    Disabled_e = 0,
    InProgress_e = 2,
    Skipped_e = 1,
  };
  inline void to_json(json& j, const NetworkExperimentStatus& v) {
    if(v == NetworkExperimentStatus::Completed_e) {
      j = "Completed";
      return;
    }
    if(v == NetworkExperimentStatus::Disabled_e) {
      j = "Disabled";
      return;
    }
    if(v == NetworkExperimentStatus::InProgress_e) {
      j = "InProgress";
      return;
    }
    if(v == NetworkExperimentStatus::Skipped_e) {
      j = "Skipped";
      return;
    }
  }
  inline void from_json(const json& j, NetworkExperimentStatus& v) {
    if(j.get<std::string>() == "Completed") {
      v = NetworkExperimentStatus::Completed_e;
      return;
    } 
    if(j.get<std::string>() == "Disabled") {
      v = NetworkExperimentStatus::Disabled_e;
      return;
    } 
    if(j.get<std::string>() == "InProgress") {
      v = NetworkExperimentStatus::InProgress_e;
      return;
    } 
    if(j.get<std::string>() == "Skipped") {
      v = NetworkExperimentStatus::Skipped_e;
      return;
    } 
  }
}