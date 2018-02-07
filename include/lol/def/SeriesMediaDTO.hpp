#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SeriesMediaDTO { 
    std::string backgroundUrl;
    std::string backgroundImageLargeUrl;
    std::string backgroundImageSmallUrl;
    std::string accentColor; 
  };
  inline void to_json(json& j, const SeriesMediaDTO& v) {
    j["backgroundUrl"] = v.backgroundUrl; 
    j["backgroundImageLargeUrl"] = v.backgroundImageLargeUrl; 
    j["backgroundImageSmallUrl"] = v.backgroundImageSmallUrl; 
    j["accentColor"] = v.accentColor; 
  }
  inline void from_json(const json& j, SeriesMediaDTO& v) {
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
    v.backgroundImageLargeUrl = j.at("backgroundImageLargeUrl").get<std::string>(); 
    v.backgroundImageSmallUrl = j.at("backgroundImageSmallUrl").get<std::string>(); 
    v.accentColor = j.at("accentColor").get<std::string>(); 
  }
}