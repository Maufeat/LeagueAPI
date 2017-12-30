#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsOwnership.hpp"
#include "LolChampionsCollectionsChampionChroma.hpp"
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
namespace lol {
  struct LolChampionsCollectionsChampionSkin { 
    std::string name;
    bool lastSelected;
    int32_t id;
    std::string splashPath;
    bool isBase;
    bool stillObtainable;
    std::vector<LolChampionsCollectionsChampionSkinEmblem> emblems;
    std::string rarityGemPath;
    std::string cardPath;
    std::string uncenteredSplashPath;
    std::optional<std::string> skinType;
    bool disabled;
    std::optional<std::string> chromaPath;
    std::optional<std::string> featuresText;
    std::string tilePath;
    std::optional<std::string> splashVideoPath;
    LolChampionsCollectionsOwnership ownership;
    int32_t championId;
    std::vector<LolChampionsCollectionsChampionChroma> chromas; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionSkin& v) {
    j["name"] = v.name; 
    j["lastSelected"] = v.lastSelected; 
    j["id"] = v.id; 
    j["splashPath"] = v.splashPath; 
    j["isBase"] = v.isBase; 
    j["stillObtainable"] = v.stillObtainable; 
    j["emblems"] = v.emblems; 
    j["rarityGemPath"] = v.rarityGemPath; 
    j["cardPath"] = v.cardPath; 
    j["uncenteredSplashPath"] = v.uncenteredSplashPath; 
    if(v.skinType)
      j["skinType"] = *v.skinType;
    j["disabled"] = v.disabled; 
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    j["tilePath"] = v.tilePath; 
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["ownership"] = v.ownership; 
    j["championId"] = v.championId; 
    j["chromas"] = v.chromas; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionSkin& v) {
    v.name = j.at("name").get<std::string>(); 
    v.lastSelected = j.at("lastSelected").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.isBase = j.at("isBase").get<bool>(); 
    v.stillObtainable = j.at("stillObtainable").get<bool>(); 
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem>>(); 
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>(); 
    v.cardPath = j.at("cardPath").get<std::string>(); 
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>(); 
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::optional<std::string>>(); 
    v.disabled = j.at("disabled").get<bool>(); 
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::optional<std::string>>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::optional<std::string>>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.chromas = j.at("chromas").get<std::vector<LolChampionsCollectionsChampionChroma>>(); 
  }
}