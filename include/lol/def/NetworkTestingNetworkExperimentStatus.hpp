#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct NetworkTestingNetworkExperimentStatus {  
    Completed_e = 3,
    Disabled_e = 0,
    InProgress_e = 2,
    Skipped_e = 1,
  };
  inline void to_json(json& j, const NetworkTestingNetworkExperimentStatus& v) {
    if(v == NetworkTestingNetworkExperimentStatus::Completed_e) {
      j = "Completed";
      return;
    }
    if(v == NetworkTestingNetworkExperimentStatus::Disabled_e) {
      j = "Disabled";
      return;
    }
    if(v == NetworkTestingNetworkExperimentStatus::InProgress_e) {
      j = "InProgress";
      return;
    }
    if(v == NetworkTestingNetworkExperimentStatus::Skipped_e) {
      j = "Skipped";
      return;
    }
  }
  inline void from_json(const json& j, NetworkTestingNetworkExperimentStatus& v) {
    if(j.get<std::string>() == "Completed") {
      v = NetworkTestingNetworkExperimentStatus::Completed_e;
      return;
    } 
    if(j.get<std::string>() == "Disabled") {
      v = NetworkTestingNetworkExperimentStatus::Disabled_e;
      return;
    } 
    if(j.get<std::string>() == "InProgress") {
      v = NetworkTestingNetworkExperimentStatus::InProgress_e;
      return;
    } 
    if(j.get<std::string>() == "Skipped") {
      v = NetworkTestingNetworkExperimentStatus::Skipped_e;
      return;
    } 
  }
}