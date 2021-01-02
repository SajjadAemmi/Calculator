//
//  ViewController.swift
//  simple-calculator
//
//  Created by Sajjad Aemmi on 10/13/1399 AP.
//

import UIKit

class ViewController: UIViewController {

   
    @IBOutlet weak var btn_1: UIButton!
    @IBOutlet weak var tb_1: UITextField!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }
    
    @IBAction func btn_1(_ sender: Any) {
        tb_1.text = "hello"
        
    }
    
    @IBAction func tb_1(_ sender: Any) {
    }
    

}

