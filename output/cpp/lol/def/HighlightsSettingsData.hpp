#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct HighlightsSettingsData { 
    std::string highlights_folder_path; 
  };
  void to_json(json& j, const HighlightsSettingsData& v) {
    j["highlights-folder-path"] = v.highlights_folder_path; 
  }
  void from_json(const json& j, HighlightsSettingsData& v) {
    v.highlights_folder_path = j.at("highlights-folder-path").get<std::string>(); 
  }
}