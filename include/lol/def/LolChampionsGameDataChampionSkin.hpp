#pragma once
#include "../base_def.hpp" 
#include "LolChampionsGameDataChampionChroma.hpp"
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
namespace lol {
  struct LolChampionsGameDataChampionSkin { 
    std::string name;
    std::optional<std::string> skinType;
    int32_t id;
    std::string splashPath;
    std::vector<LolChampionsCollectionsChampionSkinEmblem> emblems;
    std::string rarityGemPath;
    std::string cardPath;
    std::string uncenteredSplashPath;
    std::vector<LolChampionsGameDataChampionChroma> chromas;
    std::optional<std::string> chromaPath;
    std::optional<std::string> featuresText;
    std::string tilePath;
    std::optional<std::string> splashVideoPath; 
  };
  inline void to_json(json& j, const LolChampionsGameDataChampionSkin& v) {
    j["name"] = v.name; 
    if(v.skinType)
      j["skinType"] = *v.skinType;
    j["id"] = v.id; 
    j["splashPath"] = v.splashPath; 
    j["emblems"] = v.emblems; 
    j["rarityGemPath"] = v.rarityGemPath; 
    j["cardPath"] = v.cardPath; 
    j["uncenteredSplashPath"] = v.uncenteredSplashPath; 
    j["chromas"] = v.chromas; 
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    j["tilePath"] = v.tilePath; 
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
  }
  inline void from_json(const json& j, LolChampionsGameDataChampionSkin& v) {
    v.name = j.at("name").get<std::string>(); 
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::optional<std::string>>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem>>(); 
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>(); 
    v.cardPath = j.at("cardPath").get<std::string>(); 
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>(); 
    v.chromas = j.at("chromas").get<std::vector<LolChampionsGameDataChampionChroma>>(); 
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::optional<std::string>>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::optional<std::string>>(); 
  }
}