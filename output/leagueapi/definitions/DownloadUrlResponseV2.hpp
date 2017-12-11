#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct DownloadUrlResponseV2 { /**/ 
    std::string url;/**/
  };
  static void to_json(json& j, const DownloadUrlResponseV2& v) { 
    j["url"] = v.url;
  }
  static void from_json(const json& j, DownloadUrlResponseV2& v) { 
    v.url = j.at("url").get<std::string>(); 
  }
} 