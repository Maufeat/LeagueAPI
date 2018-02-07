#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
#include "LolChampionsGameDataChampionChroma.hpp"
namespace lol {
  struct LolChampionsGameDataChampionSkin { 
    int32_t id;
    std::string name;
    std::vector<LolChampionsGameDataChampionChroma> chromas;
    std::vector<LolChampionsCollectionsChampionSkinEmblem> emblems;
    std::string splashPath;
    std::string uncenteredSplashPath;
    std::string tilePath;
    std::string cardPath;
    std::string rarityGemPath;
    std::optional<std::string> splashVideoPath;
    std::optional<std::string> chromaPath;
    std::optional<std::string> skinType;
    std::optional<std::string> featuresText; 
  };
  inline void to_json(json& j, const LolChampionsGameDataChampionSkin& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["chromas"] = v.chromas; 
    j["emblems"] = v.emblems; 
    j["splashPath"] = v.splashPath; 
    j["uncenteredSplashPath"] = v.uncenteredSplashPath; 
    j["tilePath"] = v.tilePath; 
    j["cardPath"] = v.cardPath; 
    j["rarityGemPath"] = v.rarityGemPath; 
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    if(v.skinType)
      j["skinType"] = *v.skinType;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
  }
  inline void from_json(const json& j, LolChampionsGameDataChampionSkin& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.chromas = j.at("chromas").get<std::vector<LolChampionsGameDataChampionChroma>>(); 
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem>>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.cardPath = j.at("cardPath").get<std::string>(); 
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>(); 
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::optional<std::string>>(); 
  }
}