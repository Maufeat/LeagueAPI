#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/NetworkExperimentStatus.hpp>

namespace leagueapi {
  struct NetworkExperimentResource { /**/ 
    NetworkExperimentStatus status;/**/
  };
  static void to_json(json& j, const NetworkExperimentResource& v) { 
    j["status"] = v.status;
  }
  static void from_json(const json& j, NetworkExperimentResource& v) { 
    v.status = j.at("status").get<NetworkExperimentStatus>(); 
  }
} 