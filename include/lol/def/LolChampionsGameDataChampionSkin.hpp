#pragma once
#include "../base_def.hpp" 
#include "LolChampionsGameDataChampionChroma.hpp"
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
namespace lol {
  struct LolChampionsGameDataChampionSkin { 
    std::string rarityGemPath;
    std::optional<std::string> skinType;
    std::string name;
    std::optional<std::string> chromaPath;
    std::string tilePath;
    std::optional<std::string> splashVideoPath;
    std::string cardPath;
    std::string uncenteredSplashPath;
    int32_t id;
    std::vector<LolChampionsGameDataChampionChroma> chromas;
    std::vector<LolChampionsCollectionsChampionSkinEmblem> emblems;
    std::string splashPath;
    std::optional<std::string> featuresText; 
  };
  inline void to_json(json& j, const LolChampionsGameDataChampionSkin& v) {
    j["rarityGemPath"] = v.rarityGemPath; 
    if(v.skinType)
      j["skinType"] = *v.skinType;
    j["name"] = v.name; 
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["tilePath"] = v.tilePath; 
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["cardPath"] = v.cardPath; 
    j["uncenteredSplashPath"] = v.uncenteredSplashPath; 
    j["id"] = v.id; 
    j["chromas"] = v.chromas; 
    j["emblems"] = v.emblems; 
    j["splashPath"] = v.splashPath; 
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
  }
  inline void from_json(const json& j, LolChampionsGameDataChampionSkin& v) {
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>(); 
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::optional<std::string>>(); 
    v.name = j.at("name").get<std::string>(); 
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::optional<std::string>>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::optional<std::string>>(); 
    v.cardPath = j.at("cardPath").get<std::string>(); 
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.chromas = j.at("chromas").get<std::vector<LolChampionsGameDataChampionChroma>>(); 
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem>>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::optional<std::string>>(); 
  }
}