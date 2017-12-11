#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct EndOfGameLcdsRawStatDTO { /**/ 
    int64_t value;/**/
    std::string statTypeName;/**/
  };
  static void to_json(json& j, const EndOfGameLcdsRawStatDTO& v) { 
    j["value"] = v.value;
    j["statTypeName"] = v.statTypeName;
  }
  static void from_json(const json& j, EndOfGameLcdsRawStatDTO& v) { 
    v.value = j.at("value").get<int64_t>(); 
    v.statTypeName = j.at("statTypeName").get<std::string>(); 
  }
} 