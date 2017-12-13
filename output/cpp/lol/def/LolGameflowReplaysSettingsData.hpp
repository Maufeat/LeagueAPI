#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolGameflowReplaysSettingsData { 
    std::string highlights_folder_path; 
  };
  void to_json(json& j, const LolGameflowReplaysSettingsData& v) {
  j["highlights_folder_path"] = v.highlights_folder_path; 
  }
  void from_json(const json& j, LolGameflowReplaysSettingsData& v) {
  v.highlights_folder_path = j.at("highlights_folder_path").get<std::string>(); 
  }
}