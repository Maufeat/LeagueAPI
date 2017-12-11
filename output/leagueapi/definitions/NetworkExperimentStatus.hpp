#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class NetworkExperimentStatus { /**/ 
    Completed_e = 3, /**/ 
    Disabled_e = 0, /**/ 
    InProgress_e = 2, /**/ 
    Skipped_e = 1, /**/ 
  };
  static void to_json(json& j, const NetworkExperimentStatus& v) {
    switch(v) { 
    case NetworkExperimentStatus::Completed_e:
      j = "Completed";
    break;
    case NetworkExperimentStatus::Disabled_e:
      j = "Disabled";
    break;
    case NetworkExperimentStatus::InProgress_e:
      j = "InProgress";
    break;
    case NetworkExperimentStatus::Skipped_e:
      j = "Skipped";
    break;
    };
  }
  static void from_json(const json& j, NetworkExperimentStatus& v) {
    auto s = j.get<std::string>(); 
    if(s == "Completed") {
      v = NetworkExperimentStatus::Completed_e;
      return;
    } 
    if(s == "Disabled") {
      v = NetworkExperimentStatus::Disabled_e;
      return;
    } 
    if(s == "InProgress") {
      v = NetworkExperimentStatus::InProgress_e;
      return;
    } 
    if(s == "Skipped") {
      v = NetworkExperimentStatus::Skipped_e;
      return;
    } 
  }
} 