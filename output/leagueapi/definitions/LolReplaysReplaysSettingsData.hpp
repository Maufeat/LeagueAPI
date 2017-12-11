#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolReplaysReplaysSettingsData { /**/ 
    std::string replays_folder_path;/**/
    std::string highlights_folder_path;/**/
  };
  static void to_json(json& j, const LolReplaysReplaysSettingsData& v) { 
    j["replays_folder_path"] = v.replays_folder_path;
    j["highlights_folder_path"] = v.highlights_folder_path;
  }
  static void from_json(const json& j, LolReplaysReplaysSettingsData& v) { 
    v.replays_folder_path = j.at("replays_folder_path").get<std::string>(); 
    v.highlights_folder_path = j.at("highlights_folder_path").get<std::string>(); 
  }
} 