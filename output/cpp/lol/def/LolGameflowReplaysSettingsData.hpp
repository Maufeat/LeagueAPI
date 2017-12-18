#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolGameflowReplaysSettingsData { 
    std::string highlights_folder_path; 
  };
  inline void to_json(json& j, const LolGameflowReplaysSettingsData& v) {
    j["highlights-folder-path"] = v.highlights_folder_path; 
  }
  inline void from_json(const json& j, LolGameflowReplaysSettingsData& v) {
    v.highlights_folder_path = j.at("highlights-folder-path").get<std::string>(); 
  }
}