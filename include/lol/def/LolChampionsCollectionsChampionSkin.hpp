#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsChampionChroma.hpp"
#include "LolChampionsCollectionsOwnership.hpp"
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
namespace lol {
  struct LolChampionsCollectionsChampionSkin { 
    bool stillObtainable;
    std::string rarityGemPath;
    bool disabled;
    bool lastSelected;
    std::optional<std::string> skinType;
    std::string name;
    std::optional<std::string> chromaPath;
    std::string tilePath;
    LolChampionsCollectionsOwnership ownership;
    std::optional<std::string> splashVideoPath;
    std::string cardPath;
    bool isBase;
    int32_t championId;
    std::string uncenteredSplashPath;
    int32_t id;
    std::vector<LolChampionsCollectionsChampionChroma> chromas;
    std::vector<LolChampionsCollectionsChampionSkinEmblem> emblems;
    std::string splashPath;
    std::optional<std::string> featuresText; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionSkin& v) {
    j["stillObtainable"] = v.stillObtainable; 
    j["rarityGemPath"] = v.rarityGemPath; 
    j["disabled"] = v.disabled; 
    j["lastSelected"] = v.lastSelected; 
    if(v.skinType)
      j["skinType"] = *v.skinType;
    j["name"] = v.name; 
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["tilePath"] = v.tilePath; 
    j["ownership"] = v.ownership; 
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["cardPath"] = v.cardPath; 
    j["isBase"] = v.isBase; 
    j["championId"] = v.championId; 
    j["uncenteredSplashPath"] = v.uncenteredSplashPath; 
    j["id"] = v.id; 
    j["chromas"] = v.chromas; 
    j["emblems"] = v.emblems; 
    j["splashPath"] = v.splashPath; 
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionSkin& v) {
    v.stillObtainable = j.at("stillObtainable").get<bool>(); 
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>(); 
    v.disabled = j.at("disabled").get<bool>(); 
    v.lastSelected = j.at("lastSelected").get<bool>(); 
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::optional<std::string>>(); 
    v.name = j.at("name").get<std::string>(); 
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::optional<std::string>>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::optional<std::string>>(); 
    v.cardPath = j.at("cardPath").get<std::string>(); 
    v.isBase = j.at("isBase").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.chromas = j.at("chromas").get<std::vector<LolChampionsCollectionsChampionChroma>>(); 
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem>>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::optional<std::string>>(); 
  }
}