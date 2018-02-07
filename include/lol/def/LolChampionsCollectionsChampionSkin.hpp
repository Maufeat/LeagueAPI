#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
#include "LolChampionsCollectionsChampionChroma.hpp"
#include "LolChampionsCollectionsOwnership.hpp"
namespace lol {
  struct LolChampionsCollectionsChampionSkin { 
    int32_t championId;
    std::optional<std::string> chromaPath;
    int32_t id;
    std::string name;
    LolChampionsCollectionsOwnership ownership;
    bool isBase;
    bool disabled;
    bool stillObtainable;
    bool lastSelected;
    std::string splashPath;
    std::string tilePath;
    std::vector<LolChampionsCollectionsChampionChroma> chromas;
    std::vector<LolChampionsCollectionsChampionSkinEmblem> emblems;
    std::string uncenteredSplashPath;
    std::string cardPath;
    std::string rarityGemPath;
    std::optional<std::string> splashVideoPath;
    std::optional<std::string> skinType;
    std::optional<std::string> featuresText; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionSkin& v) {
    j["championId"] = v.championId; 
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["ownership"] = v.ownership; 
    j["isBase"] = v.isBase; 
    j["disabled"] = v.disabled; 
    j["stillObtainable"] = v.stillObtainable; 
    j["lastSelected"] = v.lastSelected; 
    j["splashPath"] = v.splashPath; 
    j["tilePath"] = v.tilePath; 
    j["chromas"] = v.chromas; 
    j["emblems"] = v.emblems; 
    j["uncenteredSplashPath"] = v.uncenteredSplashPath; 
    j["cardPath"] = v.cardPath; 
    j["rarityGemPath"] = v.rarityGemPath; 
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    if(v.skinType)
      j["skinType"] = *v.skinType;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionSkin& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::optional<std::string>>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    v.isBase = j.at("isBase").get<bool>(); 
    v.disabled = j.at("disabled").get<bool>(); 
    v.stillObtainable = j.at("stillObtainable").get<bool>(); 
    v.lastSelected = j.at("lastSelected").get<bool>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.chromas = j.at("chromas").get<std::vector<LolChampionsCollectionsChampionChroma>>(); 
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem>>(); 
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>(); 
    v.cardPath = j.at("cardPath").get<std::string>(); 
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>(); 
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::optional<std::string>>(); 
  }
}