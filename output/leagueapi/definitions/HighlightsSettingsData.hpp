#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct HighlightsSettingsData { /**/ 
    std::string highlights_folder_path;/**/
  };
  static void to_json(json& j, const HighlightsSettingsData& v) { 
    j["highlights_folder_path"] = v.highlights_folder_path;
  }
  static void from_json(const json& j, HighlightsSettingsData& v) { 
    v.highlights_folder_path = j.at("highlights_folder_path").get<std::string>(); 
  }
} 