"""
通过窗口交互获取输入的内容或文件路径
"""

import tkinter as tk
from tkinter import filedialog
import time

root = tk.Tk()
root.geometry("500x500") # 设置窗口大小为500x500
entry = tk.Entry(root)
entry.pack()

def get_input_txt(input_txt_var):
    input_txt = entry.get() # 获取输入的文本
    input_txt_var.set(input_txt)

def get_file_path(file_path_var):
    file_path = filedialog.askopenfilename() 
    file_path_var.set(file_path)

process_number = tk.StringVar()
station_file = tk.StringVar()
disposal_file = tk.StringVar()
summary_file = tk.StringVar()

button1 = tk.Button(root, text="获取输入的文本", command=lambda: get_input_txt(process_number))
button1.pack()

button2 = tk.Button(root, text="选择盘点单", command=lambda: get_file_path(station_file))
button2.pack()

button3 = tk.Button(root, text="选择处置单", command=lambda: get_file_path(disposal_file))
button3.pack()

button4 = tk.Button(root, text="选择汇总文件", command=lambda: get_file_path(summary_file))
button4.pack()

button5 = tk.Button(root, text="确定", command=root.destroy)
button5.pack(side=tk.LEFT)
button6 = tk.Button(root, text="取消", command=root.destroy)
button6.pack(side=tk.RIGHT)

root.mainloop()

# 获取结果
process_number = process_number.get()
station_file = station_file.get()
disposal_file = disposal_file.get()
summary_file = summary_file.get()

time.sleep(20)