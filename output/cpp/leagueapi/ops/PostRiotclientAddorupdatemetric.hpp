#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Adds or Updates a Metric*/
  static https::Result<void> PostRiotclientAddorupdatemetric (const https::Info& _info_,
      const std::string& group /*Name of metric group*/,
      const std::string& object /*Name of metric object*/,
      const std::string& name /*Name of metric item*/,
      const uint64_t& value /*Value to store*/ )
  { 
    return { https::Do(_info_, "post", "/riotclient/addorupdatemetric?", { 
      { "group", to_string(group) },
      { "object", to_string(object) },
      { "name", to_string(name) },
      { "value", to_string(value) },
    }, { 
    }) };
  }
} 