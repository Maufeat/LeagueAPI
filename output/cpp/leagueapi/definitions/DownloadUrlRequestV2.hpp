#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct DownloadUrlRequestV2 { /**/ 
    uint64_t gameId;/**/
    std::string platformId;/**/
  };
  static void to_json(json& j, const DownloadUrlRequestV2& v) { 
    j["gameId"] = v.gameId;
    j["platformId"] = v.platformId;
  }
  static void from_json(const json& j, DownloadUrlRequestV2& v) { 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
  }
} 