#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/NetworkExperimentResource.hpp>
namespace lol {
  struct NetworkExperimentsResource { 
    std::map<std::string, NetworkExperimentResource> experiments; 
  };
  inline void to_json(json& j, const NetworkExperimentsResource& v) {
    j["experiments"] = v.experiments; 
  }
  inline void from_json(const json& j, NetworkExperimentsResource& v) {
    v.experiments = j.at("experiments").get<std::map<std::string, NetworkExperimentResource>>(); 
  }
}