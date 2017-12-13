#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/NetworkExperimentStatus.hpp>
namespace lol {
  struct NetworkExperimentResource { 
    NetworkExperimentStatus status; 
  };
  void to_json(json& j, const NetworkExperimentResource& v) {
  j["status"] = v.status; 
  }
  void from_json(const json& j, NetworkExperimentResource& v) {
  v.status = j.at("status").get<NetworkExperimentStatus>(); 
  }
}