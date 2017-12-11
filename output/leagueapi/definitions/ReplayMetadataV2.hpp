#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ReplayMetadataV2 { /**/ 
    std::string gameVersion;/**/
    uint32_t fileSize;/**/
  };
  static void to_json(json& j, const ReplayMetadataV2& v) { 
    j["gameVersion"] = v.gameVersion;
    j["fileSize"] = v.fileSize;
  }
  static void from_json(const json& j, ReplayMetadataV2& v) { 
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
    v.fileSize = j.at("fileSize").get<uint32_t>(); 
  }
} 