#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/NetworkExperimentResource.hpp>

namespace leagueapi {
  struct NetworkExperimentsResource { /**/ 
    std::map<std::string, NetworkExperimentResource> experiments;/**/
  };
  static void to_json(json& j, const NetworkExperimentsResource& v) { 
    j["experiments"] = v.experiments;
  }
  static void from_json(const json& j, NetworkExperimentsResource& v) { 
    v.experiments = j.at("experiments").get<std::map<std::string, NetworkExperimentResource>>(); 
  }
} 